/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKColorMatrixViewPoint : NSObject

{
    long long _row;
    long long _col;
}

@property (nonatomic, readonly) long long row;
@property (nonatomic, readonly) long long col;

+ (id)pointWithRow:(long long)arg1 col:(long long)arg2;

- (id)initWithRow:(long long)arg1 col:(long long)arg2;

@end
