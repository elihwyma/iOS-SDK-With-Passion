/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface TSUProgressReporter : NSObject

{
    NSProgress *_progress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (id)initWithTotalUnitCount:(long long)arg1;

@end
