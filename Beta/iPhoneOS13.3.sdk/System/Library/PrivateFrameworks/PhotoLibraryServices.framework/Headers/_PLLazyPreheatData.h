/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSData.h>

@class NSString;

@interface _PLLazyPreheatData : NSData

{
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)arg1;

- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithContentsOfFile:(id)arg1;
- (void)_loadData;

@end
