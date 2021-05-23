/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSession, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol CHVisualizationManagerDelegate;

@interface CHVisualizationManager : NSObject

{
    _Bool _statusReportingEnabled;
    _Bool __registeredAsChangeObserver;
    _Bool __registeredAsInputDrawingsClient;
    CHRecognitionSession *_recognitionSession;
    id <CHVisualizationManagerDelegate> _delegate;
    NSMutableSet *__enabledVisualizationIDs;
    NSMutableArray *__activeVisualizationIDs;
    NSMutableDictionary *__activeVisualizationsByID;
    NSMutableDictionary *__strokeGroupIndexByAncestorID;
}

@property (retain, nonatomic, readonly) NSMutableSet *_enabledVisualizationIDs;
@property (retain, nonatomic, readonly) NSMutableArray *_activeVisualizationIDs;
@property (retain, nonatomic, readonly) NSMutableDictionary *_activeVisualizationsByID;
@property (retain, nonatomic, readonly) NSMutableDictionary *_strokeGroupIndexByAncestorID;
@property (nonatomic) _Bool _registeredAsChangeObserver;
@property (nonatomic) _Bool _registeredAsInputDrawingsClient;
@property (retain, nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (nonatomic) id <CHVisualizationManagerDelegate> delegate;
@property (nonatomic) _Bool statusReportingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)availableRecognitionSessionStatusKeys;
+ (id)localizedNameForRecognitionSessionStatusKey:(id)arg1;
+ (struct CGColor *)newColorForVisualizedItemAtIndex:(long long)arg1;
+ (id)availableVisualizationIdentifiers;
+ (Class)_classForVisualizationIdentifier:(id)arg1;
+ (id)localizedNameForVisualizationIdentifier:(id)arg1;
+ (_Bool)variableHeightForRecognitionSessionStatusKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (id)valueForRecognitionStatusKey:(id)arg1;
- (long long)visualizationIndexForStrokeGroup:(id)arg1;
- (void)visualizationNeedsDisplay:(id)arg1;
- (void)visualization:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (_Bool)isEnabledVisualizationForIdentifier:(id)arg1;
- (void)_updateInstalledVisualizations;
- (void)_updateSessionRegistration;
- (_Bool)_isActiveVisualizationForIdentifier:(id)arg1;
- (void)_addVisualizationForIdentifier:(id)arg1;
- (void)_removeVisualizationForIdentifier:(id)arg1;
- (void)_updateKnownStrokeGroupIndexes;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (void)recognitionSessionDidChangeStatus:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forVisualizationIdentifier:(id)arg2;
- (void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint)arg1;

@end
