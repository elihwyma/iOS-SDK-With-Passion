/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CACLabeledElementsCollection : NSObject

{
    NSArray *_axElements;
    NSMutableDictionary *_cachedElementsByTitle;
    NSMutableDictionary *_cachedElementsByTrait;
    NSMutableArray *_cachedElementsSorted;
    double _currentCollectionTransactionID;
    double _cachedCollectionTransactionID;
    _Bool _areElementsNumbered;
    double _finishedTime;
}

@property (retain) NSArray *axElements;
@property (readonly) double cachedCollectionTransactionID;
@property (readonly) double finishedTime;
@property _Bool areElementsNumbered;

+ (id)labeledElementsFromTextMarkerRanges:(id)arg1 axElement:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (unsigned long long)collectionCount;
- (id)_initWithCollection:(id)arg1;
- (void)updateWithAXElements:(id)arg1;
- (id)copyTableOfCollectedElementsByTitle;
- (id)collectedElements;
- (id)collectedElementsWithTitle:(id)arg1;
- (id)collectedElementsWithTrait:(unsigned long long)arg1;
- (_Bool)isCollecting;
- (id)copyTableOfCollectedElementsByTrait;
- (id)copyListOfCollectedElementsSorted;
- (void)cancelCollecting;
- (void)addLabeledElementWithItemElement:(id)arg1 elementsByTitle:(id)arg2 elementsByTrait:(id)arg3 elementsSorted:(id)arg4;
- (id)_keyFromTrait:(unsigned long long)arg1;
- (void)flushCollection;
- (id)newlyCollectedElements;
- (void)resetCollectedFlagForAllElements;

@end
