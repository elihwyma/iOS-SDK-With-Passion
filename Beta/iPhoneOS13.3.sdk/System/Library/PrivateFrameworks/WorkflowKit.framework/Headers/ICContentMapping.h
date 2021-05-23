/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface ICContentMapping : NSObject

{
    NSDictionary *_definition;
}

@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSString *sourceType;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) NSString *destinationType;
@property (nonatomic, readonly) NSString *destinationKey;
@property (nonatomic, readonly) NSDictionary *valueMapping;
@property (nonatomic, readonly) _Bool skipURLEncoding;
@property (nonatomic, readonly) NSDictionary *parameterUI;
@property (nonatomic, readonly) id parameterDefault;
@property (nonatomic, readonly) _Bool supportsMultipleItems;
@property (nonatomic, readonly) _Bool inputRequired;
@property (nonatomic, readonly) NSOrderedSet *contentItemClasses;

- (id)initWithDefinition:(id)arg1;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getContentCollection:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;

@end
