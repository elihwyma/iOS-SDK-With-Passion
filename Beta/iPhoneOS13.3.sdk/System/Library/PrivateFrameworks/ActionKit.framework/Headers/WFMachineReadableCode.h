/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class NSString;

@interface WFMachineReadableCode : NSObject <Swift>

{
    NSString *_type;
    NSString *_stringValue;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)initWithType:(id)arg1 stringValue:(id)arg2;
- (id)wfSerializedRepresentation;
- (id)initWithMachineReadableCodeObject:(id)arg1;

@end
