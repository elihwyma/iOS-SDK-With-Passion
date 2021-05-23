/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject

{
    CNUIUserActionItem *_defaultAction;
    NSArray *_actions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *directoryServiceActions;
@property (copy, nonatomic) NSArray *foundOnDeviceActions;
@property (nonatomic, readonly) _Bool isEmpty;

+ (id)emptyModel;

- (id)description;
- (id)allActions;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4;
- (id)initWithModel:(id)arg1 actions:(id)arg2;

@end
