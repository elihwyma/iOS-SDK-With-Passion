/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface DAOofParams : NSObject

{
    int _oofState;
    int _externalState;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_message;
    NSString *_externalMessage;
}

@property (nonatomic) int oofState;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int externalState;
@property (retain, nonatomic) NSString *externalMessage;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isEnabled;
- (id)dictionaryRepresentationForASSettingTask;
- (void)enableOof:(_Bool)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4;

@end
