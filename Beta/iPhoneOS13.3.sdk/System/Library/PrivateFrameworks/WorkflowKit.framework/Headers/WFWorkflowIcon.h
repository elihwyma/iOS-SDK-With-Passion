/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <Swift>

{
    unsigned short _glyphCharacter;
    long long _backgroundColorValue;
    NSData *_customImageData;
}

@property (nonatomic, readonly) long long backgroundColorValue;
@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (copy, nonatomic, readonly) NSData *customImageData;
@property (nonatomic, readonly) WFColor *backgroundColor;

+ (_Bool)supportsSecureCoding;
+ (unsigned short)defaultGlyphCharacter;
+ (long long)randomBackgroundColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;

@end
