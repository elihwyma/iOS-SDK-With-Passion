/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@interface SearchUIMediaPlayerUtilities : NSObject

+ (long long)MPMediaEntityTypeForSFMediaEntityType:(int)arg1;
+ (void)fetchVideoPunchoutForActionItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)MPMediaGroupingForMPMediaEntityType:(long long)arg1;
+ (id)filterPropertyForMPMediaEntityType:(long long)arg1;

@end
