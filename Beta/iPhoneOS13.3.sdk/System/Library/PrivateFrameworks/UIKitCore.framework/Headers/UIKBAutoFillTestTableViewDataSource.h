/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewDataSource : NSObject <Swift>

{
    NSMutableDictionary *_rowCountMap;
    NSMutableDictionary *_visibleCellDataMap;
    NSMutableDictionary *_headerDataMap;
    NSMutableDictionary *_footerDataMap;
}

@property (nonatomic, readonly) long long numberOfSections;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2;
- (void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setHeaderData:(id)arg1 forSection:(long long)arg2;
- (void)setFooterData:(id)arg1 forSection:(long long)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)titleForFooterInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (id)viewForFooterInSection:(long long)arg1;

@end
