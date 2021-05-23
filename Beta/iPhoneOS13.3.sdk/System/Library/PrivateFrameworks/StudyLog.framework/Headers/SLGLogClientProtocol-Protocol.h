/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <StudyLog/Swift-Protocol.h>

@protocol SLGLogClientProtocolDelegate;

@protocol SLGLogClientProtocol <Swift>

@property (weak, nonatomic) id <SLGLogClientProtocolDelegate> delegate;

- (unsigned short)queryServer:errorHandler: /* Error: Ran out of types for this method. */;

@end
