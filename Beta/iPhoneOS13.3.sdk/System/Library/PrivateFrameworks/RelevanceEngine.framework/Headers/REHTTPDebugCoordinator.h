/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject

{
    RETrainingSimulator *_simulator;
}

- (id)initWithSimulator:(id)arg1;
- (id)_stringElementForObject:(id)arg1;
- (id)_urlFromPaths:(id)arg1;
- (id)_stringForObject:(id)arg1;
- (id)_createHTMLTableFromDictionary:(id)arg1;
- (id)_linkToPaths:(id)arg1;
- (id)_linkElementForTableItem:(id)arg1 paths:(id)arg2;
- (id)_createTableWithItems:(id)arg1 itemFormatBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2;
- (void)generateDiagnosticsForPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
