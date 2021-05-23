/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject

{
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)init;
- (id)mainThread;
- (id)document;
- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)threadMOC;
- (id)mainMOC;
- (void)setThreadMOC:(id)arg1;

@end
