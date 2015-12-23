//
//  CYLTableViewPlaceHolderDelegate.h
//  CYLNoResultTableViewController
//
//  Created by 微博@iOS程序犭袁 (http://weibo.com/luohanchenyilong/) on 15/12/23.
//  Copyright © 2015年 https://github.com/ChenYilong . All rights reserved.
//

@protocol CYLTableViewPlaceHolderDelegate <NSObject>
@required
/*!
 @brief  make a emptyOverlay when the tableView is empty
 @return a emptyOverlay
 */
- (UIView *)makePlceHolederView;
@end