/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, FCTranslationMap;

@protocol FCContentContext, FCTranslationProvider;

@interface FCTranslationManager : NSObject

{
    FCAsyncSerialQueue *_queue;
    FCTranslationMap *_translationMap;
    id <FCContentContext> _contentContext;
}

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCTranslationMap *translationMap;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (nonatomic, readonly) id <FCTranslationProvider> possiblyUnfetchedTranslationProvider;

- (void)fetchTranslationProvider:(CDUnknownBlockType)arg1;
- (id)initWithContentContext:(id)arg1;

@end
