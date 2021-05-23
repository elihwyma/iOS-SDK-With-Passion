/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItem : HFItem <Swift>

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSString *_name;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 name:(id)arg2;
- (_Bool)isDisplayDisabled;
- (id)fetchLog;

@end
