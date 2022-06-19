// 수식 Button 부분 코드

void CMFCApplication3Dlg::OnBnClickedButton1()
{
	int a = GetDlgItemInt(IDC_EDIT1);
	int b = GetDlgItemInt(IDC_EDIT2);
	SetDlgItemInt(IDC_EDIT3, a + b);
}


void CMFCApplication3Dlg::OnBnClickedButton2()
{
	int a = GetDlgItemInt(IDC_EDIT1);
	int b = GetDlgItemInt(IDC_EDIT2);
	SetDlgItemInt(IDC_EDIT3, a - b);
}


void CMFCApplication3Dlg::OnBnClickedButton3()
{
	int a = GetDlgItemInt(IDC_EDIT1);
	int b = GetDlgItemInt(IDC_EDIT2);
	SetDlgItemInt(IDC_EDIT3, a * b);
}


void CMFCApplication3Dlg::OnBnClickedButton4()
{
	int a = GetDlgItemInt(IDC_EDIT1);
	int b = GetDlgItemInt(IDC_EDIT2);
	SetDlgItemInt(IDC_EDIT3, a / b);
}
​