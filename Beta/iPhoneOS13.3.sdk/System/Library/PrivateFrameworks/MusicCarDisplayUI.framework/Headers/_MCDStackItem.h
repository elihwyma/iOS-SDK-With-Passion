/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface _MCDStackItem : NSObject

{
    NSString *_identifier;
    NSIndexPath *_indexPath;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;

+ (id)stackItemWithContainer:(id)arg1;

- (id)description;

@end
