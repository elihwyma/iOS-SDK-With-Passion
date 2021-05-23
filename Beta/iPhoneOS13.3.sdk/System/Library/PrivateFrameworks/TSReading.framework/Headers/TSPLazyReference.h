/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSPComponent, TSPObject;

@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <Swift>

{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    _Bool _isWeak;
    _Bool _allowUnknownObject;
    id <TSPLazyReferenceDelegate> _delegate;
    long long _identifier;
    TSPComponent *_component;
}

@property (weak, nonatomic) id <TSPLazyReferenceDelegate> delegate;
@property (nonatomic, readonly) long long identifier;
@property (weak, nonatomic) TSPComponent *component;
@property (nonatomic, readonly) TSPObject *weakObject;
@property (retain, nonatomic) TSPObject *strongObject;
@property (nonatomic) _Bool isWeak;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) id objectIfLoaded;

+ (id)referenceForObject:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTSPObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4;
- (_Bool)isEqualToLazyReference:(id)arg1;
- (_Bool)referencesObject:(id)arg1;
- (_Bool)discardStrongObjectIfPossible;
- (void)resetIdentifier;

@end
