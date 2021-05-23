/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SSXPCEncodableRectWrapper : NSObject

{
    struct CGRect _rect;
}

@property (nonatomic) struct CGRect rect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)encodedRectsInDictionary:(id)arg1 forKey:(id)arg2;
+ (void)encodeRects:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
