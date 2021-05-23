/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSURemotePropertyList.h>

__attribute__((visibility("hidden")))
@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)objectForKey:(id)arg1;
- (id)initInternal;
- (void)registerDefaults;
- (void)processPropertyList:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;

@end
