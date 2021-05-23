/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIViewController.h>

@class ChartUpdater, NSString, NetPreferences, Stock, StockChartView, StockFetcher, StockManager, StockUpdateManager, StocksLayout, StocksStyle, UIButton, UILabel, UITableView, UIView;

@interface StockPlatterViewController : UIViewController

{
    StockFetcher *_stockFetcher;
    Stock *_stock;
    long long _chartInterval;
    UITableView *_stocksTableView;
    UIView *_statusBarView;
    NetPreferences *_netPreferences;
    StockUpdateManager *_stockUpdateManager;
    StockChartView *_chartView;
    ChartUpdater *_chartUpdater;
    StocksStyle *_style;
    StocksLayout *_layout;
    StockManager *_stockManager;
    UIButton *_attributionButton;
    UILabel *_exchangeStatusLabel;
    NSString *_stockTicker;
    long long _rowDataType;
}

@property (retain, nonatomic) UITableView *stocksTableView;
@property (retain, nonatomic) UIView *statusBarView;
@property (retain, nonatomic) NetPreferences *netPreferences;
@property (retain, nonatomic) StockUpdateManager *stockUpdateManager;
@property (retain, nonatomic) StockChartView *chartView;
@property (retain, nonatomic) ChartUpdater *chartUpdater;
@property (retain, nonatomic) StocksStyle *style;
@property (retain, nonatomic) Stock *stock;
@property (retain, nonatomic) StocksLayout *layout;
@property (retain, nonatomic) StockManager *stockManager;
@property (retain, nonatomic) UIButton *attributionButton;
@property (retain, nonatomic) UILabel *exchangeStatusLabel;
@property (retain, nonatomic) NSString *stockTicker;
@property (nonatomic) long long chartInterval;
@property (nonatomic) long long rowDataType;
@property (retain, nonatomic) StockFetcher *stockFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_cleanup;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setupStockWithTicker:(id)arg1;
- (void)_attributionButtonPressed:(id)arg1;
- (void)_updateExchangeData;
- (void)updateChartForInterval:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
- (_Bool)stockChartViewIsCurrentChartView:(id)arg1;
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;
- (id)initWithStockTicker:(id)arg1;

@end
