/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WFSerializedAccessResourcePerWorkflowState : NSObject

{
    NSString *_identifier;
    NSData *_data;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;

@end
