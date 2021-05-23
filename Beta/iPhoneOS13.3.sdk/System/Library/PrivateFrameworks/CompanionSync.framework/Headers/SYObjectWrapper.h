/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

@protocol SYObject;

__attribute__((visibility("hidden")))
@interface SYObjectWrapper : NSObject

{
    long long _type;
    id <SYObject> _wrappedObject;
}

@property (nonatomic, readonly) id <SYObject> wrappedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

- (id)initWithSYObject:(id)arg1 type:(long long)arg2;

@end
