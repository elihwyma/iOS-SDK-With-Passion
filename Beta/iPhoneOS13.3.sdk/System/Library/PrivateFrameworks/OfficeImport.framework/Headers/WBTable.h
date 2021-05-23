/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTable : NSObject

+ (void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3;
+ (void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (_Bool)isTableFloating:(const struct WrdTableProperties *)arg1 tracked:(const struct WrdTableProperties *)arg2;
+ (void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3;
+ (_Bool)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;

@end
