/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class SignedMapHead;

@interface PerApplicationTreeNode

@property (retain, nonatomic) SignedMapHead *objectMapHead;
@property (nonatomic) _Bool hasObjectMapHead;
@property (retain, nonatomic) SignedMapHead *revocationMapHead;
@property (nonatomic) _Bool hasRevocationMapHead;

+ (id)descriptor;

@end
