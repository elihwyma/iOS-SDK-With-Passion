/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPContainer.h>

@interface MSPCollectionsContainer : MSPContainer

{
    MSPContainer *_itemContainer;
}

@property (retain, nonatomic) MSPContainer *itemContainer;

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (id)initWithPersister:(id)arg1 itemContainer:(id)arg2;
- (id)queryWithDelegate:(id)arg1;

@end
