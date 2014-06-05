//
//  SHCViewController.h
//  ClearStyle
//

#import "SHCTableViewCellDelegate.h"
#import "SHCTableView.h"

#import <UIKit/UIKit.h>

@interface SHCViewController : UIViewController <SHCTableViewCellDelegate, SHCTableViewDataSource>
@property (weak, nonatomic) IBOutlet SHCTableView *tableView;

@end
