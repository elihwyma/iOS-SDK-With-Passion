/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject

{
    IKMutableArray *_declarations;
    struct _NSRange _range;
}

@property (nonatomic, readonly) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange range;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)declarationAtIndex:(unsigned long long)arg1;
- (void)addDeclaration:(id)arg1;
- (id)firstDeclaration;
- (id)lastDeclaration;

@end
