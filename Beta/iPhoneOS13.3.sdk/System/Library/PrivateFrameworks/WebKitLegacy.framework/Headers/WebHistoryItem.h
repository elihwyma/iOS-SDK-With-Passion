/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSString, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <Swift>

{
    WebHistoryItemPrivate *_private;
}

@property (copy, nonatomic, readonly) NSString *originalURLString;
@property (copy, nonatomic, readonly) NSString *URLString;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (copy, nonatomic) NSString *alternateTitle;

+ (void)initialize;
+ (id)entryWithURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)target;
- (id)dictionaryRepresentation;
- (id)URL;
- (float)_scale;
- (void)setTitle:(id)arg1;
- (id)children;
- (_Bool)_scaleIsInitial;
- (id)_viewportArguments;
- (_Bool)lastVisitWasFailure;
- (void)_setScrollPoint:(struct CGPoint)arg1;
- (void)_setScale:(float)arg1 isInitial:(_Bool)arg2;
- (void)_setViewportArguments:(id)arg1;
- (struct CGPoint)_scrollPoint;
- (void)setViewState:(id)arg1;
- (id)dictionaryRepresentationIncludingChildren:(_Bool)arg1;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (struct CGPoint)scrollPoint;
- (void)_visitedWithTitle:(id)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)_redirectURLs;
- (id)initWithWebCoreHistoryItem:(Ref_0785b76d *)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (_Bool)isTargetItem;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)arg1;
- (_Bool)_isInPageCache;
- (_Bool)_hasCachedPageExpired;

@end
