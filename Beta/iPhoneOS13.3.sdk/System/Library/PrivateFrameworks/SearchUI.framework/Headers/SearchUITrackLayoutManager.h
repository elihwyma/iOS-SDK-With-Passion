/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, TLKGridLayoutManager;

@interface SearchUITrackLayoutManager : NSObject

{
    TLKGridLayoutManager *_layoutManager;
    NSMapTable *_tableMapping;
}

@property (retain, nonatomic) TLKGridLayoutManager *layoutManager;
@property (retain, nonatomic) NSMapTable *tableMapping;

+ (id)singleLineTextWithString:(id)arg1 highlighted:(_Bool)arg2;

- (id)initWithTrackCardSection:(id)arg1;
- (id)tableRowForTrack:(id)arg1;

@end
