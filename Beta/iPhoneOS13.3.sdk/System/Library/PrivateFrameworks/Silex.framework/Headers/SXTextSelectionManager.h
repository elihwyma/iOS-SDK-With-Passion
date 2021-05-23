/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SXTextSelectionManager : NSObject

{
    NSHashTable *_textSelecting;
}

@property (nonatomic, readonly) NSHashTable *textSelecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)clearSelection;
- (void)addTextSelecting:(id)arg1;

@end
