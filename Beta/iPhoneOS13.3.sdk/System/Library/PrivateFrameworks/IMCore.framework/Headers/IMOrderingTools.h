/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface IMOrderingTools : NSObject

{
    NSString *_jsonFilePath;
    NSMutableArray *_jsonArray;
}

@property (retain, nonatomic) NSString *jsonFilePath;
@property (retain, nonatomic) NSMutableArray *jsonArray;

- (void)setUpJSONFileForChatGUID:(id)arg1;
- (void)printChangeInItemsToJSON:(id)arg1;
- (id)pathToDirectoryOfJSONFile;
- (id)messageDictionariesFromItemsInChat:(id)arg1 withEventKey:(id)arg2;
- (id)currentJsonArray;
- (void)writeDataToJSONFile:(id)arg1;
- (void)printChangeInItemsToJSONFromChat:(id)arg1;
- (void)startTrackingChat:(id)arg1;

@end
