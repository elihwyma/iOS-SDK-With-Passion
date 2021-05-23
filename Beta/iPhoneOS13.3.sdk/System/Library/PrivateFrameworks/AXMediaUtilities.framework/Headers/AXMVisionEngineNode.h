/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject

{
    _Bool _connected;
    _Bool _enabled;
    id <AXMVisionEngineNodeConnectionDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_nodeQueue;
}

@property (nonatomic, getter=isConnected) _Bool connected;
@property (weak, nonatomic) id <AXMVisionEngineNodeConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue;
@property (nonatomic, readonly) _Bool requiresVisionFramework;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)disconnect;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)connect:(id)arg1;
- (id)axmDescription;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (void)freeResources;

@end
