/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore;

@protocol CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject

{
    id <CNUIUserActivityRestorerDelegate> _delegate;
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (weak, nonatomic) id <CNUIUserActivityRestorerDelegate> delegate;

+ (id)log;

- (id)initWithContactStore:(id)arg1;
- (_Bool)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1;
- (_Bool)restoreUserActivity:(id)arg1;

@end
