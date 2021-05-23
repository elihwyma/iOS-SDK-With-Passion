/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@interface FMDownloadOptions : NSObject

{
    _Bool _allowsCellular;
    unsigned long long _downloadPriority;
}

@property (nonatomic) _Bool allowsCellular;
@property (nonatomic) unsigned long long downloadPriority;

- (id)init;
- (id)description;
- (void)_configureDefaults;

@end
