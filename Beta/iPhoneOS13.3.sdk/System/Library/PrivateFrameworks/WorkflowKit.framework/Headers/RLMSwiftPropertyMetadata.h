/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RLMSwiftPropertyMetadata : NSObject

{
    int _propertyType;
    NSString *_propertyName;
    NSString *_className;
    NSString *_linkedPropertyName;
    unsigned long long _kind;
}

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *linkedPropertyName;
@property (nonatomic) int propertyType;
@property (nonatomic) unsigned long long kind;

+ (id)metadataForOtherProperty:(id)arg1;
+ (id)metadataForListProperty:(id)arg1;
+ (id)metadataForLinkingObjectsProperty:(id)arg1 className:(id)arg2 linkedPropertyName:(id)arg3;
+ (id)metadataForOptionalProperty:(id)arg1 type:(int)arg2;
+ (id)metadataForNilLiteralOptionalProperty:(id)arg1;

@end
