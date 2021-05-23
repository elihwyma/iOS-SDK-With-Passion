/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class PMMovieProviderAnalyticsEvent, VEKProduction, VEKResult;

@protocol PMMovieProviderDelegate;

@interface PMMovieProvider : NSObject

{
    _Bool _isEditing;
    VEKProduction *_production;
    id <PMMovieProviderDelegate> _providerDelegate;
    VEKResult *_lastResult;
    PMMovieProviderAnalyticsEvent *_analyticsEvent;
    VEKProduction *_lastEditingProduction;
    unsigned long long _currentEditID;
}

@property (retain, nonatomic) VEKProduction *lastEditingProduction;
@property (nonatomic) unsigned long long currentEditID;
@property (nonatomic) _Bool isEditing;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMMovieProviderDelegate> providerDelegate;
@property (retain, nonatomic) VEKResult *lastResult;
@property (retain, nonatomic) PMMovieProviderAnalyticsEvent *analyticsEvent;

+ (unsigned long long)movieClipCountWithProduction:(id)arg1 result:(id)arg2;

- (id)initWithProduction:(id)arg1;
- (void)refreshPlayerItem;
- (void)cancelEdit;

@end
