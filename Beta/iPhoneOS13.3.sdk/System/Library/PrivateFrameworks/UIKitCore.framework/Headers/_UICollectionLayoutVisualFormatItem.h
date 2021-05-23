/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCollectionLayoutSize, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatItem : NSObject

{
    NSString *_name;
    NSCollectionLayoutSize *_size;
}

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSCollectionLayoutSize *size;

- (id)description;
- (id)initWithName:(id)arg1 size:(id)arg2;

@end
