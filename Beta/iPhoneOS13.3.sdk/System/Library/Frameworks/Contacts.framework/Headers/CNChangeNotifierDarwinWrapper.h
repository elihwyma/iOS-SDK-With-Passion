/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNChangeNotifierDarwinWrapper : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)postNotification:(id)arg1;
- (void)addObserver:(id)arg1 notification:(id)arg2;
- (void)removeObserver:(id)arg1 notification:(id)arg2;

@end
