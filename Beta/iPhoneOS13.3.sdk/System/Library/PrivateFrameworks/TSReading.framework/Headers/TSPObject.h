/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSPObjectContext, TSPUnknownContent;

@protocol TSPObjectDelegate;

@interface TSPObject : NSObject

{
    long long _identifier;
    long long _modifyObjectToken;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
    id <TSPObjectDelegate> _delegate;
}

@property (nonatomic) long long tsp_identifier;
@property (nonatomic, readonly) long long tsp_unarchiverIdentifier;
@property (nonatomic, readonly) TSPUnknownContent *tsp_unknownContent;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (weak, nonatomic) id <TSPObjectDelegate> tsp_delegate;
@property (nonatomic, readonly) _Bool needsArchiving;
@property (nonatomic, readonly) _Bool isCommandObject;
@property (nonatomic, readonly) TSPObject *componentRootObject;
@property (nonatomic, readonly) _Bool allowsImplicitComponentOwnership;
@property (nonatomic, readonly) _Bool shouldDelayArchiving;
@property (nonatomic, readonly) unsigned int delayedArchivingPriority;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) _Bool isComponentRoot;
@property (nonatomic, readonly) _Bool storeOutsideObjectArchive;
@property (nonatomic, readonly) TSPObjectContext *context;

+ (_Bool)tsp_isTransientObjectIdentifier:(long long)arg1;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)documentRoot;
- (id)initDocumentObjectWithContext:(id)arg1;
- (void)willModify;
- (void)willModifyForUpgrade;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (_Bool)allowsDuplicatesOutsideOfDocumentPackage;
- (_Bool)dirtiesDocumentPackage;
- (void)didFinishUnarchiving;

@end
