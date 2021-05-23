/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class FMFSession;

__attribute__((visibility("hidden")))
@interface CNUIFMFFacade : NSObject

{
    FMFSession *_fmfSession;
}

@property (nonatomic, readonly) FMFSession *fmfSession;

- (id)init;
- (id)initWithFMFSession:(id)arg1;
- (void)fetchFriendHandlesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
