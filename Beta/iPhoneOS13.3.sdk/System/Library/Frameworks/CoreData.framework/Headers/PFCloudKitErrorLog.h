/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PFCloudKitErrorLog : NSObject

{
    NSMutableArray *_entries;
}

@property (nonatomic, readonly) NSArray *entries;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2;

@end
