/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject

{
    NSMapTable *_inputModeToWordSearchMapping;
}

@property (retain, nonatomic) NSMapTable *inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;

- (id)init;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)wordSearchForInputMode:(id)arg1;

@end
