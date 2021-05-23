/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKToken : NSObject

{
    struct TfToken _token;
}

+ (id)dataTypeWithTfToken:(struct TfToken)arg1;
+ (id)nodeTypeWithTfToken:(struct TfToken)arg1;
+ (id)roleTypeWithTfToken:(struct TfToken)arg1;
+ (id)tokenWithNodeType:(id)arg1;
+ (id)tokenWithRoleType:(id)arg1;
+ (id)tokenWithDataType:(id)arg1;
+ (id)tokenWithSchemaType:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct TfToken)token;
- (id)stringValue;
- (id)initWithString:(id)arg1;
- (id).cxx_construct;
- (id)initWithTfToken:(struct TfToken)arg1;

@end
