/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface NSObject (BSXPCObjectUtilities)

+ (_Bool)supportsBSXPCSecureCoding;
+ (_Bool)bs_isPlistableType;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (id)bs_dataFromObject:(id)arg1;
+ (id)bs_objectFromData:(id)arg1;
+ (id)bs_decodedFromData:(id)arg1;

- (_Bool)supportsBSXPCSecureCoding;
- (_Bool)bs_isPlistableType;
- (_Bool)bs_isXPCObject;
- (id)bs_secureEncoded;
- (id)bs_encoded;

@end
