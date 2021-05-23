/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject <Swift>

{
    WDDocument *mDocument;
    int mListDefinitionId;
    NSString *mStyleId;
    NSString *mStyleRefId;
    int mType;
    NSMutableArray *mLevels;
}

@property (nonatomic, readonly) int listDefinitionId;
@property (nonatomic, readonly) NSString *styleId;
@property (copy, nonatomic) NSString *styleRefId;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)levelCount;
- (id)levelAt:(int)arg1;
- (id)addLevel;
- (void)removeLastLevel;
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;

@end
