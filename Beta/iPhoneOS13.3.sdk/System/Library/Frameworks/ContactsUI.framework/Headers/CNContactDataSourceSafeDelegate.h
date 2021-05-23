/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNContactDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNContactDataSourceSafeDelegate : NSObject

{
    id <CNContactDataSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <CNContactDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)contactDataSourceDidChange:(id)arg1;

@end
