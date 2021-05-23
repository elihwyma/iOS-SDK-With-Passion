/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject

{
    _Bool notifyUsingAssetsdNotificationCenter;
    float currentMultiplier;
    float currentTotal;
    id delegate;
    NSMutableArray *multipliers;
    NSString *mediaPathString;
}

@property (weak, nonatomic) id delegate;
@property (nonatomic) float currentMultiplier;
@property (retain, nonatomic) NSMutableArray *multipliers;
@property (nonatomic) float currentTotal;
@property (nonatomic) _Bool notifyUsingAssetsdNotificationCenter;
@property (retain, nonatomic) NSString *mediaPathString;

+ (id)unarchiveFromDictionary:(id)arg1;

- (void)push:(float)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)pop;
- (float)totalProgress:(float)arg1;
- (void)updateProgress:(float)arg1;
- (void)popAndUpdate;
- (void)setCurrentMediaPath:(id)arg1;
- (id)archiveToDictionary;

@end
