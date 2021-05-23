/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKChangeSet, NSArray, NSDictionary;

@protocol IKDataSourceElementImplementing <Swift>

@property (nonatomic, readonly) NSArray *prototypes;
@property (nonatomic, readonly) IKChangeSet *itemsChangeSet;
@property (copy, nonatomic, readonly) NSDictionary *indexTitles;
@property (nonatomic, readonly) NSArray *masterPrototypes;
@property (copy, nonatomic, readonly) NSArray *proxiedItemElements;

- (unsigned short)teardown;
- (unsigned short)numberOfItems;
- (unsigned short)initializeWithElementFactory: /* Error: Ran out of types for this method. */;
- (unsigned short)configureUpdatesWithImplementation: /* Error: Ran out of types for this method. */;
- (unsigned short)applyUpdatesWithImplementation:usingUpdater: /* Error: Ran out of types for this method. */;
- (unsigned short)prototypeForItemAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)elementForItemAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfItemForElement: /* Error: Ran out of types for this method. */;
- (unsigned short)loadIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)unloadIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)resetUpdates;
- (unsigned short)updateStylesUsingUpdater: /* Error: Ran out of types for this method. */;

@end
