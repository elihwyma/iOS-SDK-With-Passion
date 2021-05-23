/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSCoder.h>

@class NSString;

@interface NSCoder (BSXPCCoderExtras)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeStringForKey:(id)arg1;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;

@end
