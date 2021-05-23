/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PKDispatchAfterHandler : NSObject

{
    NSMutableDictionary *_identifierBlockMap;
}

@property (retain, nonatomic) NSMutableDictionary *identifierBlockMap;

+ (id)appLifeCycleHandler;

- (id)init;
- (void)cancelAll;
- (id)identifierForStringIdentifier:(id)arg1;
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)cancelBlocksWithStringIdentifier:(id)arg1;

@end
