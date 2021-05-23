/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class CHVisualizationManager, NSString;

@protocol PKVisualizationManager;

@interface PKVisualizationManager : NSObject

{
    id <PKVisualizationManager> _delegate;
    CHVisualizationManager *_chVisualizationManager;
}

@property (retain, nonatomic) CHVisualizationManager *chVisualizationManager;
@property (nonatomic) _Bool recognitionStatusReportingEnabled;
@property (weak, nonatomic) id <PKVisualizationManager> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)availableRecognitionStatusKeys;
+ (id)localizedNameForRecognitionStatusKey:(id)arg1;

- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect)arg2;
- (void)visualizationManagerNeedsDisplay:(id)arg1;
- (void)visualizationManagerDidUpdateSessionStatus:(id)arg1;
- (id)valueForRecognitionStatusKey:(id)arg1;

@end
