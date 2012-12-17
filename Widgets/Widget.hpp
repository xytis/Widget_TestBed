
namespace Widgets {
  class CTransformation {
  };
  
  class CWidget {
  protected:
    
    
  public:
    //Types
    typedef CWidget *       ptr;
    
    //Life span
    CWidget(std::string name);
    
    virtual CWidget::ptr Clone(CWidget::ptr source) = 0;
    virtual CWidget::ptr Detach() = 0;
    
    //Tree building
    /**
     * Returns direct child by name
     */
    CWidget::ptr        Child(std::string name);
    
    void                AddChild(CWidget::ptr child);
    CWidget::ptr        RemoveChild(std::string name);
    
    
    
