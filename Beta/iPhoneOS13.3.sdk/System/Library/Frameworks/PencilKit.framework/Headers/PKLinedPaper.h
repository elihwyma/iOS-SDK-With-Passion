/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@interface PKLinedPaper : NSObject <Swift>

{
    double _horizontalInset;
    struct CGPoint _lineSpacing;
}

@property (nonatomic, readonly) struct CGPoint lineSpacing;
@property (nonatomic, readonly) double horizontalInset;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLineSpacing:(struct CGPoint)arg1 horizontalInset:(double)arg2;

@end
