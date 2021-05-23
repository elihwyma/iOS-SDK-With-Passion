/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class NSString, VEKProduction;

@protocol PMEditProviderDelegate;

@interface PMTitleEditorProvider : NSObject <Swift>

{
    VEKProduction *_production;
    id <PMEditProviderDelegate> _delegate;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;

- (void)updateTitle:(id)arg1;
- (id)initWithProduction:(id)arg1;
- (void)updateSubtitle:(id)arg1;
- (id)defaultMemoriesTitleHelper;

@end
